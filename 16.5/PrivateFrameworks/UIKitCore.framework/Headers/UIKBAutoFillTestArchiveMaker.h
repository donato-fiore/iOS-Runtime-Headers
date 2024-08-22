// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBAUTOFILLTESTARCHIVEMAKER_H
#define UIKBAUTOFILLTESTARCHIVEMAKER_H

@class NSString;
@protocol NSKeyedArchiverDelegate;

#import <Foundation/Foundation.h>

#import "UIKBAutoFillTestArchive.h"
#import "UIViewController.h"

@interface UIKBAutoFillTestArchiveMaker : NSObject <NSKeyedArchiverDelegate>

 {
    UIKBAutoFillTestArchive *_testArchive;
    UIViewController *_viewControllerToSnapshot;
    NSInteger _currentTableViewTag;
    NSInteger _currentTextFieldTag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)archiveMakerWithViewControllerToSnapshot:(id)arg0 ;
-(id)_cloneBarButtonItem:(id)arg0 ;
-(id)_cloneButton:(id)arg0 ;
-(id)_cloneGenericView:(id)arg0 ;
-(id)_cloneLabel:(id)arg0 ;
-(id)_cloneNavigationItem:(id)arg0 ;
-(id)_cloneTableView:(id)arg0 ;
-(id)_cloneTextField:(id)arg0 ;
-(id)_cloneTextView:(id)arg0 ;
-(id)_cloneView:(id)arg0 ;
-(id)_cloneViewHierarchyFromRootView:(id)arg0 ;
-(id)_makeCopyOfObject:(id)arg0 ;
-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
-(id)initWithViewControllerToSnapshot:(id)arg0 ;
-(id)makeArchive;
-(void)_applyPropertiesFromLabel:(id)arg0 toLabel:(id)arg1 ;
-(void)_applyPropertiesFromView:(id)arg0 toView:(id)arg1 ;


@end


#endif