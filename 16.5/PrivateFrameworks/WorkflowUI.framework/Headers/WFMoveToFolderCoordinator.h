// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMOVETOFOLDERCOORDINATOR_H
#define WFMOVETOFOLDERCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface WFMoveToFolderCoordinator : NSObject {
    ? database;
    ? service;
    ? delegate;
    ? presentingViewController;
    ? source;
}




-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(void)move:(id)arg0 presentingViewController:(id)arg1 ;
-(void)move:(id)arg0 presentingViewController:(id)arg1 source:(int)arg2 ;


@end


#endif