#include <stdio.h>

int main() {
    // caloriesBurned = speed * weight * CAL * minutes;
    const float CAL = 0.0175;
    float weight, speed, caloriesBurned;
    int minutes;
    printf("Digite seu peso: ");
    scanf("%f", &weight);
    printf("\nDigite a velocidade(km/h) (ou 0 para ser calculada): ");
    scanf("%f", &speed);
    printf("\nDigite o tempo(min) (ou 0 para ser calculado): ");
    scanf("%d", &minutes);
    printf("\nDigite a energia (ou 0 para ser calculada): ");
    scanf("%f", &caloriesBurned);
    if (speed == 0) {
        speed = caloriesBurned/(weight * CAL * minutes);
        printf("A velocidade que você precisa é: %.2fkm/h", speed);
    } else if (minutes == 0) {
        minutes = caloriesBurned/(weight * CAL * speed);
        printf("O tempo que você precisa é: %d minutos", minutes);
    } else if (caloriesBurned == 0) {
        caloriesBurned = speed * weight * CAL * minutes;
        printf("A energia que você precisa é: %.2f kcal", caloriesBurned);
    }
    
    return 0;
}