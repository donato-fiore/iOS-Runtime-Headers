// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPMODEL_H
#define TPMODEL_H

@class NSMutableDictionary, NSData, NSMutableSet;
@protocol TPDecrypter;

#import <Foundation/Foundation.h>


@interface TPModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *custodianRecoveryKeys; // ivar: _custodianRecoveryKeys
@property (retain, nonatomic) NSObject<TPDecrypter> *decrypter; // ivar: _decrypter
@property (retain, nonatomic) NSMutableDictionary *peersByID; // ivar: _peersByID
@property (retain, nonatomic) NSMutableDictionary *policiesByVersion; // ivar: _policiesByVersion
@property (retain, nonatomic) NSData *recoveryEncryptionPubKey; // ivar: _recoveryEncryptionPubKey
@property (retain, nonatomic) NSData *recoverySigningPubKey; // ivar: _recoverySigningPubKey
@property BOOL suppressInitialInfoLogging; // ivar: _suppressInitialInfoLogging
@property (retain, nonatomic) NSMutableSet *uncheckedVouchers; // ivar: _uncheckedVouchers
@property (retain, nonatomic) NSMutableSet *vouchers; // ivar: _vouchers


+(id)preapprovalsFromKeys:(id)arg0 ;
-(BOOL)anyTrustedPeerDistrustsOtherPeer:(id)arg0 ;
-(BOOL)canIntroduceCandidate:(id)arg0 withSponsor:(id)arg1 toEpoch:(NSUInteger)arg2 underPolicy:(id)arg3 disposition:(id)arg4 ;
-(BOOL)canTrustCandidate:(id)arg0 inEpoch:(NSUInteger)arg1 ;
-(BOOL)checkIntroductionForCandidate:(id)arg0 stableInfo:(id)arg1 withSponsorID:(id)arg2 error:(*id)arg3 ;
-(BOOL)considerPolicyFromPeerID:(id)arg0 stableInfo:(id)arg1 secrets:(id)arg2 newestPolicyDoc:(*id)arg3 error:(*id)arg4 ;
-(BOOL)currentStatePossiblyMissingData;
-(BOOL)doesVoucherMatchRecoveryKeys:(id)arg0 ;
-(BOOL)hasPeerWithID:(id)arg0 ;
-(BOOL)hasPotentiallyTrustedPeerPreapprovingKey:(id)arg0 ;
-(BOOL)hasPotentiallyTrustedPeerWithSigningKey:(id)arg0 ;
-(BOOL)isCustodianRecoveryKeyTrusted:(id)arg0 ;
-(BOOL)isRecoveryKeyDistrusted:(id)arg0 ;
-(BOOL)isRecoveryKeyEnrolled;
-(BOOL)isRecoveryKeyExcluded:(id)arg0 ;
-(BOOL)updateDynamicInfo:(id)arg0 forPeerWithID:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateStableInfo:(id)arg0 forPeerWithID:(id)arg1 error:(*id)arg2 ;
-(BOOL)validatePeerWithPreApproval:(id)arg0 sponsor:(id)arg1 ;
-(BOOL)validateVoucherForPeer:(id)arg0 sponsor:(id)arg1 ;
-(BOOL)verifyVoucherSignature:(id)arg0 ;
-(NSUInteger)latestEpochAmongPeerIDs:(id)arg0 ;
-(NSUInteger)maxClock;
-(NSUInteger)statusOfPeerWithID:(id)arg0 ;
-(id)actualPeerWithID:(id)arg0 error:(*id)arg1 ;
-(id)allCustodianRecoveryKeyPeerIDs;
-(id)allCustodianRecoveryKeys;
-(id)allMachineIDs;
-(id)allPeerIDs;
-(id)allPeers;
-(id)allPolicyVersions;
-(id)allRegisteredPolicyVersions;
-(id)allTrustedPeersWithCurrentRecoveryKey;
-(id)allVouchers;
-(id)bestRecoveryKeyForStableInfo:(id)arg0 dynamicInfo:(id)arg1 vouchers:(id)arg2 ;
-(id)bestWalrusAcrossTrustedPeers;
-(id)bestWalrusForStableInfo:(id)arg0 dynamicInfo:(id)arg1 walrusStableChanges:(id)arg2 ;
-(id)bestWebAccessAcrossTrustedPeers;
-(id)bestWebAccessForStableInfo:(id)arg0 dynamicInfo:(id)arg1 webAccessStableChanges:(id)arg2 ;
-(id)calculateDynamicInfoForPeerWithID:(id)arg0 addingPeerIDs:(id)arg1 removingPeerIDs:(id)arg2 preapprovedKeys:(id)arg3 signingKeyPair:(id)arg4 currentMachineIDs:(id)arg5 error:(*id)arg6 ;
-(id)calculateDynamicInfoFromModel:(id)arg0 peer:(id)arg1 peerPermanentInfo:(id)arg2 peerStableInfo:(id)arg3 startingDynamicInfo:(id)arg4 addingPeerIDs:(id)arg5 removingPeerIDs:(id)arg6 preapprovedKeys:(id)arg7 signingKeyPair:(id)arg8 currentMachineIDs:(id)arg9 error:(*id)arg10 ;
-(id)considerCandidateID:(id)arg0 withSponsorID:(id)arg1 sponsorPermanentInfo:(id)arg2 toExpandIncludedPeerIDs:(id)arg3 andExcludedPeerIDs:(id)arg4 dispositions:(id)arg5 currentMachineIDs:(id)arg6 forEpoch:(NSUInteger)arg7 ;
-(id)createDynamicInfoWithIncludedPeerIDs:(id)arg0 excludedPeerIDs:(id)arg1 dispositions:(id)arg2 preapprovals:(id)arg3 signingKeyPair:(id)arg4 error:(*id)arg5 ;
-(id)createStableInfoWithFrozenPolicyVersion:(id)arg0 flexiblePolicyVersion:(id)arg1 policySecrets:(id)arg2 syncUserControllableViews:(int)arg3 secureElementIdentity:(id)arg4 walrusSetting:(id)arg5 webAccess:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 signingKeyPair:(id)arg10 recoverySigningPubKey:(id)arg11 recoveryEncryptionPubKey:(id)arg12 isInheritedAccount:(BOOL)arg13 error:(*id)arg14 ;
-(id)createVoucherForCandidate:(id)arg0 stableInfo:(id)arg1 withSponsorID:(id)arg2 reason:(NSUInteger)arg3 signingKeyPair:(id)arg4 error:(*id)arg5 ;
-(id)custodianPeerWithID:(id)arg0 ;
-(id)dynamicInfoForJoiningPeerID:(id)arg0 peerPermanentInfo:(id)arg1 peerStableInfo:(id)arg2 sponsorID:(id)arg3 preapprovedKeys:(id)arg4 signingKeyPair:(id)arg5 currentMachineIDs:(id)arg6 error:(*id)arg7 ;
-(id)filterPeerList:(id)arg0 byMachineIDs:(id)arg1 dispositions:(id)arg2 ;
-(id)findCustodianRecoveryKeyWithUUID:(id)arg0 ;
-(id)getDynamicInfoForPeerWithID:(id)arg0 ;
-(id)getPeerIDsTrustedByPeerWithDynamicInfo:(id)arg0 toAccessView:(id)arg1 error:(*id)arg2 ;
-(id)getPeerIDsTrustedByPeerWithID:(id)arg0 toAccessView:(id)arg1 error:(*id)arg2 ;
-(id)getStableInfoForPeerWithID:(id)arg0 ;
-(id)getViewsForCRK:(id)arg0 donorPermanentInfo:(id)arg1 donorStableInfo:(id)arg2 error:(*id)arg3 ;
-(id)getViewsForPeer:(id)arg0 stableInfo:(id)arg1 error:(*id)arg2 ;
-(id)initWithDecrypter:(id)arg0 ;
-(id)peerCountsByMachineID;
-(id)peerIDThatTrustsCustodianRecoveryKeys:(id)arg0 canIntroducePeer:(id)arg1 stableInfo:(id)arg2 ;
-(id)peerIDThatTrustsRecoveryKeys:(id)arg0 canIntroducePeer:(id)arg1 stableInfo:(id)arg2 ;
-(id)peerWithID:(id)arg0 ;
-(id)peersWithMachineID:(id)arg0 ;
-(id)policyForPeerIDs:(id)arg0 candidatePeerID:(id)arg1 candidateStableInfo:(id)arg2 error:(*id)arg3 ;
-(id)policyWithVersion:(NSUInteger)arg0 ;
-(id)recoveryEncryptionPublicKey;
-(id)recoveryKeyPeerID:(id)arg0 ;
-(id)recoverySigningPublicKey;
-(id)trustedPeers;
-(id)untrustedPeerIDs;
-(id)untrustedPeerIDsFromTrustedPeers;
-(id)vectorClock;
-(id)viablePeerCountsByModelID;
-(int)userViewSyncabilityConsensusAmongTrustedPeers:(id)arg0 ;
-(void)checkVouchers;
-(void)considerPreapprovalsSponsoredByPeer:(id)arg0 toRecursivelyExpandIncludedPeerIDs:(id)arg1 andExcludedPeerIDs:(id)arg2 dispositions:(id)arg3 currentMachineIDs:(id)arg4 forEpoch:(NSUInteger)arg5 ;
-(void)considerVouchersSponsoredByPeerID:(id)arg0 sponsorPermanentInfo:(id)arg1 toRecursivelyExpandIncludedPeerIDs:(id)arg2 andExcludedPeerIDs:(id)arg3 dispositions:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(NSUInteger)arg6 ;
-(void)deletePeerWithID:(id)arg0 ;
-(void)filterPreapprovals:(id)arg0 forExistingPeers:(id)arg1 ;
-(void)recursivelyExpandIncludedPeerIDs:(id)arg0 andExcludedPeerIDs:(id)arg1 dispositions:(id)arg2 withPeersTrustedBySponsorID:(id)arg3 currentMachineIDs:(id)arg4 forEpoch:(NSUInteger)arg5 ;
-(void)registerCustodianRecoveryKey:(id)arg0 ;
-(void)registerPeerWithPermanentInfo:(id)arg0 ;
-(void)registerPolicyDocument:(id)arg0 ;
-(void)registerVoucher:(id)arg0 ;
-(void)removeCustodianRecoveryKey:(id)arg0 ;
-(void)removeRecoveryKey;
-(void)setRecoveryKeys:(id)arg0 ;


@end


#endif