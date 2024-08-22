// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTPREVIEWTHUMBNAILVIEWCONTROLLER_H
#define WFCOMPACTPREVIEWTHUMBNAILVIEWCONTROLLER_H

@class WFContentItem, UIView;


#import "WFCompactThumbnailViewController.h"

@interface WFCompactPreviewThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (weak, nonatomic) UIView *hostedView; // ivar: _hostedView


-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)preferredContentMode;
-(id)initWithContentItem:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif