fn even_or_odd(number: i32) -> &'static str {
    return match number % 2 == 0 {
        true => "Even",
        false => "Odd",
    };
}
