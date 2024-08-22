// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDCONFIGURATION_H
#define TIKEYBOARDCONFIGURATION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardInputManagerState.h"
#import "TIKeyboardIntermediateText.h"

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accentKeyString; // ivar: _accentKeyString
@property (nonatomic) BOOL assertDefaultKeyPlane; // ivar: _assertDefaultKeyPlane
@property (copy, nonatomic) TIKeyboardInputManagerState *inputManagerState; // ivar: _inputManagerState
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText; // ivar: _intermediateText
@property (copy, nonatomic) NSString *layoutTag; // ivar: _layoutTag
@property (retain, nonatomic) NSArray *multilingualLanguages; // ivar: _multilingualLanguages


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif