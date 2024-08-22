// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIMATHSYMBOLPUNCTUATIONCONTROLLER_H
#define TIMATHSYMBOLPUNCTUATIONCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIMathSymbolPunctuationController : NSObject {
    NSUInteger _state;
    NSInteger _location;
    unsigned short _replacementCharacter;
}


@property (readonly, nonatomic) BOOL converted; // ivar: _converted
@property (copy, nonatomic) NSString *decimalSeparator; // ivar: _decimalSeparator
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL replaceAfterNumerals; // ivar: _replaceAfterNumerals


-(BOOL)updateInputString:(id)arg0 ;
-(id)init;
-(id)mathSymbolPunctuationedStringForInputString:(id)arg0 ;
-(void)reset;
-(void)setInputString:(id)arg0 ;


@end


#endif