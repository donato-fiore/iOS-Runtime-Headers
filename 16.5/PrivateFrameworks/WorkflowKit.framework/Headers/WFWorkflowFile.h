// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWFILE_H
#define WFWORKFLOWFILE_H

@class NSArray, NSDate, NSString, WFFileRepresentation, WFWorkflowIcon, NSDictionary;
@protocol WFRecordStorage, NSItemProviderWriting;

#import <Foundation/Foundation.h>

#import "WFWorkflowQuarantine.h"

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting>



@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabledOnLockScreen;
@property (readonly, nonatomic) NSUInteger estimatedSize;
@property (readonly, nonatomic) WFFileRepresentation *file; // ivar: _file
@property (nonatomic) BOOL hasOutputFallback;
@property (nonatomic) BOOL hasShortcutInputVariables;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSDictionary *noInputBehavior;
@property (copy, nonatomic) NSArray *outputClasses;
@property (retain, nonatomic) WFWorkflowQuarantine *quarantine; // ivar: _quarantine
@property (copy, nonatomic) NSArray *quickActionSurfacesForSharing;
@property (readonly, nonatomic) NSDictionary *rootObject; // ivar: _rootObject
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)migrateRootObject;
-(BOOL)writeToFileURL:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeToOutputStream:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)descriptor;
-(id)fileDataWithError:(*id)arg0 ;
-(id)fileDataWithFormat:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)initWithDescriptor:(id)arg0 performMigration:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDictionary:(id)arg0 name:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 name:(id)arg1 performMigration:(BOOL)arg2 ;
-(id)initWithFileData:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)recordRepresentationWithError:(*id)arg0 ;
-(id)writeToDiskWithError:(*id)arg0 ;
-(id)writeToDiskWithFormat:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif