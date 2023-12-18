def readFile(fileName):
    """
    Read a file into a vector of strings.
    """
    lines = []
    with open(f"./{fileName}", 'r') as f:
        for line in f:
            lines.append(line)
    return lines