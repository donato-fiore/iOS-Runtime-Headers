// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIEXPERIMENTDEPLOYMENTREFSTORE_H
#define TRIEXPERIMENTDEPLOYMENTREFSTORE_H

@protocol TRIPathReferencing;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"

@interface TRIExperimentDeploymentRefStore : NSObject <TRIPathReferencing>

 {
    TRIServerContext *_context;
}




-(BOOL)hasReferenceToPath:(id)arg0 ;
-(id)initWithServerContext:(id)arg0 ;


@end


#endif