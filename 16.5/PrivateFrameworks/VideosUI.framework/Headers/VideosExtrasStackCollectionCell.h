// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASSTACKCOLLECTIONCELL_H
#define VIDEOSEXTRASSTACKCOLLECTIONCELL_H

@class UICollectionViewCell, NSArray;


#import "VideosExtrasStackTemplateViewController.h"
#import "VideosExtrasGridSectionHeaderStyle.h"
#import "VideosExtrasGridElementViewController.h"

@interface VideosExtrasStackCollectionCell : UICollectionViewCell {
    NSArray *_fitConstraints;
    BOOL _needsViewWillAppear;
}


@property (retain, nonatomic) VideosExtrasStackTemplateViewController *parentViewController; // ivar: _parentViewController
@property (readonly, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionStyle; // ivar: _sectionStyle
@property (retain, nonatomic) VideosExtrasGridElementViewController *viewController; // ivar: _viewController


-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif