// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATASOURCEBATCHUPDATEMAPHELPER_H
#define _UIDATASOURCEBATCHUPDATEMAPHELPER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UIDataSourceSnapshotter.h"

@interface _UIDataSourceBatchUpdateMapHelper : NSObject {
    _UIDataSourceSnapshotter *_initialSnapshot;
    _UIDataSourceSnapshotter *_finalSnapshot;
    NSArray *_updateItems;
    _UIDataSourceUpdateMaps _updateMaps;
}




-(id)description;
-(void)dealloc;


@end


#endif