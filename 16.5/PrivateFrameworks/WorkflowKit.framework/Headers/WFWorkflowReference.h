// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWREFERENCE_H
#define WFWORKFLOWREFERENCE_H

@class WFWorkflowDescriptor, NSString, WFIcon, NSDate, WFWorkflowIcon, NSUserActivity, NSArray;
@protocol WFNaming, NSItemProviderReading, NSItemProviderWriting;



@interface WFWorkflowReference : WFWorkflowDescriptor <WFNaming, NSItemProviderReading, NSItemProviderWriting>



@property (readonly, nonatomic) NSUInteger actionCount; // ivar: _actionCount
@property (readonly, copy, nonatomic) NSString *actionsDescription; // ivar: _actionsDescription
@property (readonly, nonatomic) WFIcon *attributionIcon;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabledOnLockScreen; // ivar: _disabledOnLockScreen
@property (readonly, nonatomic) BOOL hasShortcutInputVariables; // ivar: _hasShortcutInputVariables
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hiddenFromLibraryAndSync; // ivar: _hiddenFromLibraryAndSync
@property (readonly, copy, nonatomic) WFWorkflowIcon *icon; // ivar: _icon
@property (readonly, nonatomic) BOOL isDeleted; // ivar: _isDeleted
@property (readonly, nonatomic) NSDate *lastRunDate; // ivar: _lastRunDate
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) NSInteger remoteQuarantineStatus; // ivar: _remoteQuarantineStatus
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivityForViewing;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributionIconWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 rounded:(BOOL)arg2 ;
-(id)externalURLForRunningWithSource:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 color:(NSInteger)arg2 glyphCharacter:(unsigned short)arg3 associatedAppBundleIdentifier:(id)arg4 subtitle:(id)arg5 actionsDescription:(id)arg6 actionCount:(NSUInteger)arg7 isDeleted:(BOOL)arg8 hiddenFromLibraryAndSync:(BOOL)arg9 creationDate:(id)arg10 modificationDate:(id)arg11 lastRunDate:(id)arg12 remoteQuarantineStatus:(NSInteger)arg13 hasShortcutInputVariables:(BOOL)arg14 disabledOnLockScreen:(BOOL)arg15 source:(id)arg16 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)speakableString;
-(void)donateRunInteraction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif