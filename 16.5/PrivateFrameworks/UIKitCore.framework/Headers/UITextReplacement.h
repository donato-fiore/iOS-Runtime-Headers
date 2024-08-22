// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTREPLACEMENT_H
#define UITEXTREPLACEMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface UITextReplacement : NSObject

@property (readonly, nonatomic) NSString *menuTitle; // ivar: _menuTitle
@property (readonly, nonatomic) NSString *originalText; // ivar: _originalText
@property (readonly, nonatomic) UITextRange *range; // ivar: _range
@property (copy, nonatomic) id *replacementCompletionBlock; // ivar: _replacementCompletionBlock
@property (readonly, nonatomic) NSString *replacementText; // ivar: _replacementText
@property (nonatomic) unsigned int usageTrackingMask; // ivar: _usageTrackingMask


+(id)replacementWithRange:(id)arg0 original:(id)arg1 replacement:(id)arg2 menuTitle:(id)arg3 ;
-(BOOL)_isNoReplacementsFoundItem;
-(void)didReplaceTextWithTarget:(id)arg0 ;


@end


#endif