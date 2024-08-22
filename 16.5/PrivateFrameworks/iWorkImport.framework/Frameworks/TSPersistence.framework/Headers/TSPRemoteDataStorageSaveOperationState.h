// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPREMOTEDATASTORAGESAVEOPERATIONSTATE_H
#define TSPREMOTEDATASTORAGESAVEOPERATIONSTATE_H

@protocol TSPDataStorage;

#import <Foundation/Foundation.h>


@interface TSPRemoteDataStorageSaveOperationState : NSObject

@property (readonly, nonatomic) NSUInteger changeCount; // ivar: _changeCount
@property (readonly, nonatomic) NSObject<TSPDataStorage> *originalPackageDataStorage; // ivar: _originalPackageDataStorage
@property (readonly, nonatomic) NSObject<TSPDataStorage> *updatedPackageDataStorage; // ivar: _updatedPackageDataStorage


-(id)initWithChangeCount:(NSUInteger)arg0 originalPackageDataStorage:(id)arg1 updatedPackageDataStorage:(id)arg2 ;


@end


#endif