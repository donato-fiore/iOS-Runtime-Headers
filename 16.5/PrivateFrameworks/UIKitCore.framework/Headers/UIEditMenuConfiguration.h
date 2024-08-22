// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIEDITMENUCONFIGURATION_H
#define UIEDITMENUCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIResponder.h"
#import "UIWindow.h"

@interface UIEditMenuConfiguration : NSObject

@property (weak, nonatomic) UIResponder *_firstResponderTarget; // ivar: __firstResponderTarget
@property (nonatomic) BOOL _ignoresPassthroughInView; // ivar: __ignoresPassthroughInView
@property (weak, nonatomic) UIWindow *_overrideSourceWindow; // ivar: __overrideSourceWindow
@property (copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (nonatomic) NSInteger preferredArrowDirection; // ivar: _preferredArrowDirection
@property (nonatomic) CGPoint sourcePoint; // ivar: _sourcePoint


+(id)configurationWithIdentifier:(id)arg0 sourcePoint:(struct CGPoint )arg1 ;
-(id)description;


@end


#endif