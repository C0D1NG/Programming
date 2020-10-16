def fig2words(n: int) -> str:
    ones_units = {0: 'zero', 1:'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five', 6: 'six', 7: 'seven', 8: 'eight', 9: 'nine', 10: 'ten', 11: 'eleven', 12: 'twelve', 13: 'thirteen', 14: 'fourteen', 15: 'fifteen', 16: 'sixteen', 17: 'seventeen', 18: 'eighteen', 19: 'nineteen'}
    
    tens = {0: '', 10: 'ten', 20: 'twenty', 30: 'thirty', 40: 'fourty', 50: 'fifty', 60: 'sixty', 70: 'seventy', 80: 'eighty', 90: 'ninety'}
    
    words = ''
    if n in ones_units:
        return ones_units[n]
    else:
        if len(str(n)) == 2:
            words = tens[int(str(n)[0])*10] + ' ' + ones_units[int(str(n)[1])]
        else:
            words = ones_units[int(str(n)[0])] + ' hundred'
            if str(n)[1] != '0' or str(n)[2] != '0':
                words += " and " + tens[int(str(n)[1]) * 10] + " " + ones_units[int(str(n)[2])]
    return words
