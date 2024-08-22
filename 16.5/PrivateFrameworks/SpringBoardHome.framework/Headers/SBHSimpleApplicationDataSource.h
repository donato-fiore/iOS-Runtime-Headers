// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSIMPLEAPPLICATIONDATASOURCE_H
#define SBHSIMPLEAPPLICATIONDATASOURCE_H

@class NSString;
@protocol SBHIconModelApplicationDataSource;

#import <Foundation/Foundation.h>


@interface SBHSimpleApplicationDataSource : NSObject <SBHIconModelApplicationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allApplicationPlaceholdersForIconModel:(id)arg0 ;
-(id)allApplicationsForIconModel:(id)arg0 ;
-(id)iconModel:(id)arg0 applicationWithBundleIdentifier:(id)arg1 ;
-(id)makeApplicationWithRecord:(id)arg0 ;
-(id)simpleApplicationsWithEnumeratorOptions:(NSUInteger)arg0 ;


@end


#endif