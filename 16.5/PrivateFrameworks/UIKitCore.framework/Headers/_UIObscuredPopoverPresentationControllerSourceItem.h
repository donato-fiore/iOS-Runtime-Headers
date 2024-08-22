// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOBSCUREDPOPOVERPRESENTATIONCONTROLLERSOURCEITEM_H
#define _UIOBSCUREDPOPOVERPRESENTATIONCONTROLLERSOURCEITEM_H

@class NSString;
@protocol UIPopoverPresentationControllerSourceItem, _UIPopoverPresentationControllerSourceItem_Internal;

#import <Foundation/Foundation.h>


@interface _UIObscuredPopoverPresentationControllerSourceItem : NSObject <UIPopoverPresentationControllerSourceItem, _UIPopoverPresentationControllerSourceItem_Internal>

 {
    id<_UIPopoverPresentationControllerSourceItem_Internal> *_sourceItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)obscuredSourceItemForItem:(id)arg0 ;
-(id)_sourceViewForPresentationInWindow:(id)arg0 ;
-(struct CGRect )_sourceRectForPresentationInWindow:(id)arg0 ;


@end


#endif