// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI30LIBRARYHOMESHAREVIEWCONTROLLER_H
#define _TTC8VIDEOSUI30LIBRARYHOMESHAREVIEWCONTROLLER_H

@class UINavigationItem;


#import "VUIBaseViewController.h"

@interface _TtC8VideosUI30LibraryHomeShareViewController : VUIBaseViewController {
    ? homeController;
    ? lastSelectedMediaLibrary;
}


@property (nonatomic, readonly) UINavigationItem *navigationItem;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;


@end


#endif