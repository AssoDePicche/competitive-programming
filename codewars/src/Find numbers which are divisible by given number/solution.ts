export function divisibleBy(numbers: number[], divisor: number): number[] {
    let divisible_numbers: number[] = [];

    numbers.forEach((number) => {
        if (number % divisor === 0) {
            divisible_numbers.push(number);
        }
    });

    return divisible_numbers;
}
