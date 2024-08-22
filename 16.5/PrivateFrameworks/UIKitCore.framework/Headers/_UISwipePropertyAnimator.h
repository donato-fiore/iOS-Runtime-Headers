// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISWIPEPROPERTYANIMATOR_H
#define _UISWIPEPROPERTYANIMATOR_H

@class NSHashTable;


#import "UIViewPropertyAnimator.h"

@interface _UISwipePropertyAnimator : UIViewPropertyAnimator {
    NSHashTable *_viewsToAnimateAdditively;
}




-(BOOL)_shouldAnimateAdditivelyForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addViewsToAnimateAdditively:(id)arg0 ;


@end


#endif