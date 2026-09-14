def response(hey_bob):
    if hey_bob.endswith('?') and hey_bob.isupper():
        return "Calm down, I know what I'm doing!"
    if len(hey_bob) == 0 or hey_bob.isspace():
        return "Fine. Be that way!"
    if hey_bob.strip().endswith('?'):
        return "Sure."
    if hey_bob.isupper():
        return "Whoa, chill out!"
    return "Whatever."