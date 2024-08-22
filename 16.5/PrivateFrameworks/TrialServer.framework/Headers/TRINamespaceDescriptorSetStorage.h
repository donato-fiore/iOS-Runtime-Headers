// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRINAMESPACEDESCRIPTORSETSTORAGE_H
#define TRINAMESPACEDESCRIPTORSETSTORAGE_H

@protocol TRIPaths;

#import <Foundation/Foundation.h>


@interface TRINamespaceDescriptorSetStorage : NSObject {
    id<TRIPaths> *_paths;
}




-(BOOL)hasNamespaceDescriptorsForTreatmentWithId:(id)arg0 path:(*id)arg1 ;
-(BOOL)overwriteNamespaceDescriptors:(id)arg0 forTreatmentId:(id)arg1 ;
-(BOOL)removeUnreferencedNamespaceDescriptorSetsWithServerContext:(id)arg0 removedCount:(*unsigned int)arg1 ;
-(id)_collectNamespaceDescriptorSets;
-(id)initWithPaths:(id)arg0 ;
-(id)parentDirForNamespaceDescriptorSets;
-(id)pathForNamespaceDescriptorsWithTreatmentId:(id)arg0 ;


@end


#endif