// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEERRORCELLVALUE_H
#define TSCEERRORCELLVALUE_H



#import "TSCECellValue.h"

@interface TSCEErrorCellValue : TSCECellValue {
    *TSCEErrorValue _errorValue;
}




-(BOOL)isEqualToCellValue:(id)arg0 ;
-(id)canonicalKeyString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayString;
-(id)format;
-(id)initWithArchive:(*void)arg0 locale:(id)arg1 ;
-(id)initWithErrorValue:(struct TSCEErrorValue *)arg0 locale:(id)arg1 ;
-(struct TSCEErrorValue *)errorValue;
-(struct TSCEValue )tsceValue;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif