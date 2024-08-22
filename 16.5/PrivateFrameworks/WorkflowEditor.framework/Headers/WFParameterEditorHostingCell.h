// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPARAMETEREDITORHOSTINGCELL_H
#define WFPARAMETEREDITORHOSTINGCELL_H

@class UITableViewCell, UIViewController, NSString;
@protocol WFParameterEventObserver, WFParameterEditorHostingCellDelegate;


#import "WFParameterEditorModel.h"
#import "WFParameterHostingView.h"

@interface WFParameterEditorHostingCell : UITableViewCell <WFParameterEventObserver>



@property (weak, nonatomic) UIViewController *containingViewController; // ivar: _containingViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFParameterEditorHostingCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastWidth; // ivar: _lastWidth
@property (readonly, nonatomic) WFParameterEditorModel *model; // ivar: _model
@property (retain, nonatomic) WFParameterHostingView *modernHostingView; // ivar: _modernHostingView
@property (readonly) Class superclass;


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)parameterAttributesDidChange:(id)arg0 ;
-(void)reconfigureModernView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContext;
-(void)updateModel:(id)arg0 ;
-(void)updatedParameterState:(id)arg0 isUIUpdate:(BOOL)arg1 ;


@end


#endif