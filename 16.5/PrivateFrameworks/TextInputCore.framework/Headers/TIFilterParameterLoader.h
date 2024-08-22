// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIFILTERPARAMETERLOADER_H
#define TIFILTERPARAMETERLOADER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TIFilterParameterLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue; // ivar: _loadQueue


-(id)init;
-(id)loadCandidateFilterSpecificationForLanguageIdentifier:(id)arg0 ;
-(id)loadContentsForPlistWithLanguage:(id)arg0 ;
-(id)parameterOverridesFolderURL;
-(id)parameterPlistForLanguage:(id)arg0 ;
-(id)universalParameterPlist;
-(void)loadCandidateFilterSpecificationForLanguageIdentifier:(id)arg0 targetQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif