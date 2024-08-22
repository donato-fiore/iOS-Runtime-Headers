// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKTESTCASERECORD_H
#define TTKTESTCASERECORD_H

@class NSMutableDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "TIContinuousPath.h"

@interface TTKTestCaseRecord : NSObject {
    NSMutableDictionary *_internalAnnotations;
}


@property (readonly, copy, nonatomic) NSArray *additionalIntendedTexts; // ivar: _additionalIntendedTexts
@property (readonly, copy, nonatomic) NSMutableDictionary *annotations;
@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *inputText; // ivar: _inputText
@property (readonly, copy, nonatomic) NSArray *intendedText;
@property (readonly, copy, nonatomic) NSString *layoutName; // ivar: _layoutName
@property (readonly, copy, nonatomic) NSString *primaryIntendedText; // ivar: _primaryIntendedText
@property (readonly, copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (readonly, copy, nonatomic) TIContinuousPath *touchData;
@property (readonly, copy, nonatomic) NSArray *touchDataCollection; // ivar: _touchDataCollection
@property (readonly, copy, nonatomic) NSString *transliteration; // ivar: _transliteration


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIntendedText:(id)arg0 additionalIntendedTexts:(id)arg1 touchDataCollection:(id)arg2 recordID:(id)arg3 layoutName:(id)arg4 inputText:(id)arg5 transliteration:(id)arg6 context:(id)arg7 annotations:(id)arg8 ;
-(id)toJsonDictionary;
-(void)setAnnotation:(id)arg0 forKey:(id)arg1 ;


@end


#endif