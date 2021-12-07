def ROI(revenue,cost):
    '''Return on investment'''
    roi = (revenue - cost) / cost
    return "{0}{1}".format("Should do, ROI = ",str(round(roi,2))) if roi >= 0.75 else "{0}{1}".format("Do not, ROI = ",str(round(roi,2)))
print(ROI(float(input("Revenue ")),float(input("Cost "))))