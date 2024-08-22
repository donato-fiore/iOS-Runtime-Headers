// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSUPPORTEDAPPSVIEWCONTROLLER_H
#define VSSUPPORTEDAPPSVIEWCONTROLLER_H

@class UIViewController, NSArray, VSOptional, NSOperationQueue;
@protocol VSSupportedAppsViewControllerDelegate;



@interface VSSupportedAppsViewController : UIViewController

@property (copy, nonatomic) NSArray *apps; // ivar: _apps
@property (weak, nonatomic) NSObject<VSSupportedAppsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VSOptional *identityProvider; // ivar: _identityProvider
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) NSArray *supportedApps; // ivar: _supportedApps


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_didFinish;
-(void)_displayApps;
-(void)_doneButtonPresed:(id)arg0 ;
-(void)_presentError:(id)arg0 ;
-(void)beginLoadingImages;
-(void)viewDidLoad;


@end


#endif