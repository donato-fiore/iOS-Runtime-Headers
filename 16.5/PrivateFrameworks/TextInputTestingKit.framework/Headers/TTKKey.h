// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKKEY_H
#define TTKKEY_H

@class UIKBTree, NSString;

#import <Foundation/Foundation.h>

#import "ACTKeyboardLayoutUtils.h"

@interface TTKKey : NSObject {
    UIKBTree *_key;
    ACTKeyboardLayoutUtils *_layoutUtils;
}


@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) short keyCode; // ivar: _keyCode
@property (readonly, copy, nonatomic) NSString *string;


-(id)description;
-(id)initWithUIKBTree:(id)arg0 layoutUtils:(id)arg1 ;
-(struct CGPoint )center;


@end


#endif