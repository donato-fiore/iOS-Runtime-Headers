// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTORYBOARD_H
#define UISTORYBOARD_H

@class NSBundle, NSString, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboard : NSObject

@property (nonatomic) id *__currentSender; // ivar: ___currentSender
@property (nonatomic) id *__currentStoryboardSegueCreator; // ivar: ___currentStoryboardSegueCreator
@property (nonatomic) UIStoryboardSegueTemplate *__currentStoryboardSegueTemplate; // ivar: ___currentStoryboardSegueTemplate
@property (readonly, nonatomic) NSBundle *bundle; // ivar: bundle
@property (readonly, nonatomic) NSString *designatedEntryPointIdentifier; // ivar: designatedEntryPointIdentifier
@property (readonly, nonatomic) NSString *designatedMenuIdentifier; // ivar: designatedMenuIdentifier
@property (readonly, nonatomic) NSDictionary *identifierToExternalStoryboardReferenceMap; // ivar: identifierToExternalStoryboardReferenceMap
@property (readonly, nonatomic) NSDictionary *identifierToNibNameMap; // ivar: identifierToNibNameMap
@property (readonly, nonatomic) NSMutableDictionary *identifierToUINibMap; // ivar: identifierToUINibMap
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSString *storyboardFileName; // ivar: storyboardFileName


+(id)storyboardWithName:(id)arg0 bundle:(id)arg1 ;
-(BOOL)containsNibNamed:(id)arg0 ;
// -(id)__reallyInstantiateViewControllerWithIdentifier:(id)arg0 creator:(id)arg1 storyboardSegueTemplate:(unk)arg2 sender:(id)arg3  ;
-(id)_instantiateInitialMenu;
// -(id)_instantiateInitialViewControllerWithCreator:(id)arg0 storyboardSegueTemplate:(unk)arg1 sender:(id)arg2  ;
-(id)_instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)arg0 storyboardSegueTemplate:(id)arg1 sender:(id)arg2 ;
// -(id)_instantiateViewControllerWithIdentifier:(id)arg0 creator:(id)arg1 storyboardSegueTemplate:(unk)arg2 sender:(id)arg3  ;
-(id)identifierForStringsFile;
-(id)initWithBundle:(id)arg0 storyboardFileName:(id)arg1 identifierToNibNameMap:(id)arg2 identifierToExternalStoryboardReferenceMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4 designatedMenuIdentifier:(id)arg5 ;
-(id)instantiateInitialViewController;
-(id)instantiateInitialViewControllerWithCreator:(id)arg0 ;
-(id)instantiateViewControllerWithIdentifier:(id)arg0 ;
-(id)instantiateViewControllerWithIdentifier:(id)arg0 creator:(id)arg1 ;
-(id)nibForStoryboardNibNamed:(id)arg0 ;
-(id)nibForViewControllerWithIdentifier:(id)arg0 ;
-(id)referencedStoryboardForExternalReferenceInfo:(id)arg0 ;
-(void)dealloc;


@end


#endif