fn solution(number: i32) -> i32 {
    if number <= 0 {
        return 0;
    }

    let mut sum_of_multiples: i32 = 0;

    for n in 0..number {
        if n % 3 == 0 || n % 5 == 0 {
            sum_of_multiples += n;
        }
    }

    return sum_of_multiples;
}
