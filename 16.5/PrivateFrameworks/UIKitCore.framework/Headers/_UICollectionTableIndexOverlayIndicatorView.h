// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONTABLEINDEXOVERLAYINDICATORVIEW_H
#define _UICOLLECTIONTABLEINDEXOVERLAYINDICATORVIEW_H

@class NSString;
@protocol _UICollectionTableIndexOverlayHost;


#import "UIView.h"
#import "UILabel.h"
#import "UITapGestureRecognizer.h"

@interface _UICollectionTableIndexOverlayIndicatorView : UIView {
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id<_UICollectionTableIndexOverlayHost> *_host;
}


@property (copy, nonatomic) NSString *currentText;


-(id)initWithHost:(id)arg0 ;
-(void)_tapGestureChanged:(id)arg0 ;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif