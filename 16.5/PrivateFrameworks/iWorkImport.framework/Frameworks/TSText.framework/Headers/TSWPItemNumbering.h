// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPITEMNUMBERING_H
#define TSWPITEMNUMBERING_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface TSWPItemNumbering : NSObject {
    NSDictionary *_defaultPageNumberFormats;
    NSArray *_validFormatNames;
    NSDictionary *_formatTypeInfo;
}




+(id)allPageNumberFormats;
+(id)defaultPageNumberFormatForLocale:(id)arg0 ;
+(id)displayNameForPageNumberFormat:(id)arg0 ;
+(id)instance;
+(id)localizedStringForPageNumberFormatNWithLocale:(id)arg0 ;
+(id)localizedStringForPageNumberFormatNofNWithLocale:(id)arg0 ;
+(id)localizedStringForPageNumberFormatPageNWithLocale:(id)arg0 ;
+(id)localizedStringForPageNumberFormatPageNofNWithLocale:(id)arg0 ;
+(id)pageNumberFormatNameForType:(int)arg0 ;
+(id)pageNumberFormatsForDocLocale:(id)arg0 ;
+(id)stringFromNumber:(NSUInteger)arg0 forFormatName:(id)arg1 ;
+(id)stringFromNumber:(NSUInteger)arg0 forPageNumberFormatType:(int)arg1 ;
+(int)pageNumberFormatTypeForName:(id)arg0 ;
-(id)init;
-(id)p_additiveTypeFormatForNumber:(NSUInteger)arg0 limitsAndSymbols:(id)arg1 ;
-(id)p_allPageNumberFormats;
-(id)p_defaultPageNumberFormatForLocale:(id)arg0 ;
-(id)p_displayNameForPageNumberFormat:(id)arg0 ;
-(id)p_formatInfoForFormatName:(id)arg0 ;
-(id)p_numericTypeFormatForNumber:(NSUInteger)arg0 digitChars:(id)arg1 ;
-(id)p_pageNumberFormatNameForType:(int)arg0 ;
-(id)p_pageNumberFormatsForDocLocale:(id)arg0 ;
-(id)p_stringFromNumber:(NSUInteger)arg0 forFormatName:(id)arg1 ;
-(id)p_stringFromNumber:(NSUInteger)arg0 forPageNumberFormatType:(int)arg1 ;
-(id)p_symbolicTypeFormatForNumber:(NSUInteger)arg0 symbols:(id)arg1 ;
-(int)p_pageNumberFormatTypeForName:(id)arg0 ;


@end


#endif