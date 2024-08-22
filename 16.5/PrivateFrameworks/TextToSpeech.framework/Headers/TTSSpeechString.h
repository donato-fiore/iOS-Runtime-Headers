// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSPEECHSTRING_H
#define TTSSPEECHSTRING_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "TTSSpeechString.h"

@interface TTSSpeechString : NSObject

@property (retain, nonatomic) NSString *originalString; // ivar: _originalString
@property (retain, nonatomic) TTSSpeechString *parentString; // ivar: _parentString
@property (retain, nonatomic) NSMutableArray *transformations; // ivar: _transformations
@property (retain, nonatomic) NSString *transformedString; // ivar: _transformedString


-(BOOL)_rangeIsValid:(struct _NSRange )arg0 ;
-(BOOL)encapsulateSubstringAtRange:(struct _NSRange )arg0 withPrefix:(id)arg1 andSuffix:(id)arg2 ;
-(BOOL)insertAtLocation:(NSUInteger)arg0 string:(id)arg1 ;
-(BOOL)transformRange:(struct _NSRange )arg0 to:(id)arg1 ;
-(id)initWithOriginalString:(id)arg0 ;
-(id)initWithParentSpeechString:(id)arg0 ;
-(struct _NSRange )translateRangeInTransformedString:(struct _NSRange )arg0 ;
-(void)_insertTransformation:(id)arg0 forEncapsulatedTerminator:(BOOL)arg1 ;


@end


#endif