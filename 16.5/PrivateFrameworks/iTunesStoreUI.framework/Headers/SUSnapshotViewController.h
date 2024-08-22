// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSNAPSHOTVIEWCONTROLLER_H
#define SUSNAPSHOTVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UIImageView;



@interface SUSnapshotViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger originalOrientation; // ivar: _originalOrientation
@property (retain, nonatomic) UIViewController *originalViewController; // ivar: _originalViewController


-(NSInteger)_currentOrientation;
-(id)_snapshotOfView:(id)arg0 ;
-(id)initWithOriginal:(id)arg0 ;
-(void)_startActivityIndicator;
-(void)_stopActivityIndicator;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif