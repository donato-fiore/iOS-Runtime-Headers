// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI27LIBRARYGENRESVIEWCONTROLLER_H
#define _TTC8VIDEOSUI27LIBRARYGENRESVIEWCONTROLLER_H

@class UINavigationItem;


#import "VUIBaseViewController.h"

@interface _TtC8VideosUI27LibraryGenresViewController : VUIBaseViewController {
    ? mediaLibrary;
    ? menuController;
    ? genres;
    ? selectedGenre;
    ? serviceRequest;
}


@property (nonatomic, readonly) UINavigationItem *navigationItem;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;


@end


#endif