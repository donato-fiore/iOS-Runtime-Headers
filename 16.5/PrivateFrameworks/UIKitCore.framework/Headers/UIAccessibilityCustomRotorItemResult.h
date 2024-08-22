// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYCUSTOMROTORITEMRESULT_H
#define UIACCESSIBILITYCUSTOMROTORITEMRESULT_H

@class NSUUID;
@protocol NSObject;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface UIAccessibilityCustomRotorItemResult : NSObject

@property (weak, nonatomic) NSObject<NSObject> *targetElement; // ivar: _targetElement
@property (retain, nonatomic) UITextRange *targetRange; // ivar: _targetRange
@property (retain, nonatomic) NSUUID *uuid; // ivar: uuid


-(id)initWithTargetElement:(id)arg0 targetRange:(id)arg1 ;


@end


#endif