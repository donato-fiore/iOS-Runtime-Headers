// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINPUTVIEWCONTROLLEROUTPUT_H
#define _UIINPUTVIEWCONTROLLEROUTPUT_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL hasDictation; // ivar: _hasDictation
@property (nonatomic) CGPoint inputModeListFromLocation; // ivar: _inputModeListFromLocation
@property (nonatomic) CGFloat inputModeListTouchBegan; // ivar: _inputModeListTouchBegan
@property (nonatomic) NSInteger inputModeListTouchPhase; // ivar: _inputModeListTouchPhase
@property (nonatomic) CGPoint inputModeListUpdatePoint; // ivar: _inputModeListUpdatePoint
@property (retain, nonatomic) NSArray *keyboardOutputs; // ivar: _keyboardOutputs
@property (copy, nonatomic) NSString *markedText; // ivar: _markedText
@property (copy, nonatomic) NSString *primaryLanguage; // ivar: _primaryLanguage
@property (nonatomic) BOOL proceedShouldReturn; // ivar: _proceedShouldReturn
@property (nonatomic) BOOL requiresInputManagerSync; // ivar: _requiresInputManagerSync
@property (nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (nonatomic) BOOL setMarkedText; // ivar: _setMarkedText
@property (nonatomic) BOOL shouldAdvanceInputMode; // ivar: _shouldAdvanceInputMode
@property (nonatomic) BOOL shouldAdvanceResponder; // ivar: _shouldAdvanceResponder
@property (nonatomic) BOOL shouldDismiss; // ivar: _shouldDismiss
@property (nonatomic) BOOL shouldPostReturnKeyNotification; // ivar: _shouldPostReturnKeyNotification
@property (nonatomic) NSInteger source; // ivar: _source
@property (nonatomic) BOOL unmarkText; // ivar: _unmarkText


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_currentKeyboardOutput;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_pushNewKeyboardOutput;
-(void)adjustTextPositionByCharacterOffset:(NSInteger)arg0 ;
-(void)deleteBackward;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)setInputModeList:(NSInteger)arg0 touchBegan:(CGFloat)arg1 fromLocation:(struct CGPoint )arg2 updatePoint:(struct CGPoint )arg3 ;


@end


#endif