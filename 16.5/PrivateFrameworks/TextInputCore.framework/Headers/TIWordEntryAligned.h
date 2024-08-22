// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIWORDENTRYALIGNED_H
#define TIWORDENTRYALIGNED_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIWordEntry.h"

@interface TIWordEntryAligned : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *alignedKeyboardInputs; // ivar: _alignedKeyboardInputs
@property (retain, nonatomic) NSArray *alignedTouches; // ivar: _alignedTouches
@property (copy, nonatomic) NSString *completeString; // ivar: _completeString
@property (copy, nonatomic) NSString *expectedString; // ivar: _expectedString
@property (nonatomic) int inSessionAlignmentConfidence; // ivar: _inSessionAlignmentConfidence
@property (nonatomic) BOOL isContinuousPathConversion; // ivar: _isContinuousPathConversion
@property (retain, nonatomic) TIWordEntry *originalWord; // ivar: _originalWord


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif