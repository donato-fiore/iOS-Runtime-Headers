// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10WORKFLOWUI26MOVETOFOLDERVIEWCONTROLLER_H
#define _TTC10WORKFLOWUI26MOVETOFOLDERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC10WorkflowUI26MoveToFolderViewController : UIViewController {
    ? delegate;
    ? newFolderSection;
    ? myFoldersSection;
    ? rendererIdentifier;
    ? shortcutsToMove;
    ? $__lazy_storage_$_layout;
    ? $__lazy_storage_$_collectionView;
    ? $__lazy_storage_$_dataSource;
    ? iconImage;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 shortcutsToMove:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancel;
-(void)viewDidLoad;


@end


#endif