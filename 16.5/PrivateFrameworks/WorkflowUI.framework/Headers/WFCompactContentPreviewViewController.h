// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTCONTENTPREVIEWVIEWCONTROLLER_H
#define WFCOMPACTCONTENTPREVIEWVIEWCONTROLLER_H

@class UIViewController, WFContentItem, NSString, UIActivityIndicatorView, UIView;
@protocol WFCompactThumbnailViewControllerDelegate, WFCompactContentPreviewViewControllerDelegate;


#import "WFCompactThumbnailViewController.h"

@interface WFCompactContentPreviewViewController : UIViewController <WFCompactThumbnailViewControllerDelegate>



@property (readonly, nonatomic) BOOL contentAllowsScrolling;
@property (readonly, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFCompactContentPreviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIActivityIndicatorView *indicatorView; // ivar: _indicatorView
@property (readonly, nonatomic) UIView *sourceViewForQuickLook;
@property (readonly) Class superclass;
@property (retain, nonatomic) WFCompactThumbnailViewController *thumbnailViewController; // ivar: _thumbnailViewController


-(BOOL)_canShowWhileLocked;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)_fileThumbnailViewControllerForContentItem:(id)arg0 ;
-(void)_getTypeSpecificThumbnailViewControllerForContentItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)getThumbnailViewControllerForContentItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateContentSize;
-(void)loadView;
-(void)thumbnailViewControllerDidInvalidateSize:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif