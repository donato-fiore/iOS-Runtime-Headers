// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUINETWORKERRORVIEWCONTROLLER_H
#define SKUINETWORKERRORVIEWCONTROLLER_H

@class UIViewController, NSString, NSError, UIScrollView;
@protocol SKUIProductPageChildViewController;


#import "SKUIClientContext.h"
#import "SKUIProductPageHeaderViewController.h"

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController>



@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;


+(BOOL)canDisplayError:(id)arg0 ;
-(id)init;
-(id)initWithError:(id)arg0 ;
-(void)_networkTypeChanged:(id)arg0 ;
-(void)dealloc;
-(void)loadView;


@end


#endif