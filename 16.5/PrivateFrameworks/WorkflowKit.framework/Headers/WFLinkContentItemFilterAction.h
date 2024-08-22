// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKCONTENTITEMFILTERACTION_H
#define WFLINKCONTENTITEMFILTERACTION_H

@class NSDictionary, LNMetadataProvider, INAppIntentDescriptor, LNEntityMetadata, LNQueryMetadata;


#import "WFContentItemFilterAction.h"

@interface WFLinkContentItemFilterAction : WFContentItemFilterAction {
    NSDictionary *_outputDictionary;
    LNMetadataProvider *_metadataProvider;
    NSDictionary *_propertiesByPropertyIdentifier;
}


@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor; // ivar: _appIntentDescriptor
@property (readonly, copy, nonatomic) LNEntityMetadata *entityMetadata; // ivar: _entityMetadata
@property (readonly, copy, nonatomic) LNQueryMetadata *queryMetadata; // ivar: _queryMetadata


-(BOOL)isInMemoryFindAction;
-(id)bundleIdentifier;
-(id)copyWithSerializedParameters:(id)arg0 ;
-(id)createStateForParameter:(id)arg0 fromSerializedRepresentation:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 queryMetadata:(id)arg1 entityMetadata:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4 appIntentDescriptor:(id)arg5 ;
-(id)linkValueTypes;
-(id)metadataProvider;
-(id)name;
-(id)outputDictionary;
-(id)propertiesByPropertyIdentifier;
-(id)propertyQuery;
-(id)sortingOptionsWithRandomSortOrder:(*BOOL)arg0 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)finishRunningWithOutput:(id)arg0 randomSortOrder:(BOOL)arg1 error:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif