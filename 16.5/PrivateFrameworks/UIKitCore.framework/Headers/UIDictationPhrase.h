// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONPHRASE_H
#define UIDICTATIONPHRASE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIDictationPhrase : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *alternativeInterpretations; // ivar: _alternativeInterpretations
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(id)phraseWithText:(id)arg0 alternativeInterpretations:(id)arg1 ;
+(id)phraseWithText:(id)arg0 alternativeInterpretations:(id)arg1 style:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 alternativeInterpretations:(id)arg1 style:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif