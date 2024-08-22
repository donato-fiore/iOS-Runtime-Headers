// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTRANSITIONCONTAINERVIEWCONTROLLER_H
#define TSTRANSITIONCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString;



@interface TSTransitionContainerViewController : UIViewController {
    ? disableSidebarBarButtonItem;
    ? doneButtonPlacement;
    ? rootViewController;
    ? containerIdentifier;
    ? backBarButtonItem;
    ? nextDisplayMode;
    ? $__lazy_storage_$_sidebarBarButtonItem;
    ? $__lazy_storage_$_doneBarButtonItem;
    ? transition;
}


@property (nonatomic, readonly) NSString *description;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 identifier:(id)arg1 ;


@end


#endif