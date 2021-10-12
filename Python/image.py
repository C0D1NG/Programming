def convertToScreen(data, out, org=0):
    pixel = []
    for y in range(192):
        pixrow = []
        pixel.append(pixrow)
        for col in range(32):
            palette = readColor(data, y, col)
            bits = readBits(data, y, col)
            for b in range(8):
                if bits & (0b10000000 >> b):
                    pixrow.append(palette[0])
                else:
                    pixrow.append(palette[1])

    import png
    pngw = png.Writer(256, 192, palette=PALETTE)
    pngw.write(out, pixel) 