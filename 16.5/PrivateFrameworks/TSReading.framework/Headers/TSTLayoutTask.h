// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLAYOUTTASK_H
#define TSTLAYOUTTASK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSTMasterLayout.h"

@interface TSTLayoutTask : NSObject {
    TSTMasterLayout *mMasterLayout;
}


@property (retain, nonatomic) NSMutableArray *cellStatesToLayout; // ivar: mCellStatesToLayout


-(id)initWithMasterLayout:(id)arg0 ;
-(void)dealloc;
-(void)flushToGlobalCaches;


@end


#endif