/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "INetworkStatusMgrExt.h"
#import "IContactMgrExt.h"
#import "ICdnComMgrExt.h"
#import "IMsgExt.h"
#import "IDownloadImageExt.h"
#import "IVideoExt.h"
#import "WCSessionDelegate.h"

@class WCSession, NSDate, NSDictionary, NSString, MemoryMappedKV, NSMutableArray;

@interface WCWatchNativeMgr : MMService <WCSessionDelegate, PBMessageObserverDelegate, MMKernelExt, INetworkStatusMgrExt, ICdnComMgrExt, IContactMgrExt, IMsgExt, IDownloadImageExt, IVideoExt, MMService> {
	BOOL _isRefreshingSessionKey;
	BOOL _needRefreshSessionKey;
	BOOL _didHandledOpenURLSinceEnterForeground;
	NSMutableArray* _fileInfosNeedTransfer;
	BOOL _isCurrentControllerResume;
	WCSession* _session;
	MemoryMappedKV* _mappedKV;
	NSString* _lastInterfaceContoller;
	NSDate* _lastInterfaceControllerUpdatedAt;
	NSDictionary* _lastInterfaceControllerExtraInfo;
	NSString* _currentInterfaceController;
	NSDate* _currentInterfaceControllerUpdatedAt;
	NSMutableArray* _pendingSignalMessages;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* pendingSignalMessages;
@property(assign, nonatomic) BOOL isCurrentControllerResume;
@property(retain, nonatomic) NSDate* currentInterfaceControllerUpdatedAt;
@property(copy, nonatomic) NSString* currentInterfaceController;
@property(retain, nonatomic) NSDictionary* lastInterfaceControllerExtraInfo;
@property(retain, nonatomic) NSDate* lastInterfaceControllerUpdatedAt;
@property(copy, nonatomic) NSString* lastInterfaceContoller;
@property(retain, nonatomic) NSDate* lastReachableDate;
@property(retain, nonatomic) MemoryMappedKV* mappedKV;
@property(assign, nonatomic) BOOL needShowNewBadge;
@property(readonly, assign, nonatomic) BOOL isWatchAppInstalled;
@property(readonly, assign, nonatomic) BOOL isWatchRunning;
@property(readonly, assign, nonatomic) BOOL reachable;
@property(readonly, assign, nonatomic) BOOL isPairedWatch;
@property(retain, nonatomic) WCSession* session;
+(id)getWatchDeviceId;
-(void).cxx_destruct;
-(BOOL)isValidContactForWatch:(id)watch;
-(void)debugLog:(id)log;
-(BOOL)isWatchRecentReachable;
-(BOOL)isNotificationActionFromWatch:(id)watch;
-(BOOL)transferFileIfKeyValid:(id)valid type:(unsigned)type;
-(id)keyForTransferFileWithUsername:(id)username serverID:(long long)anId type:(unsigned)type;
-(void)updateApplicationContextIfCould;
-(unsigned long)replyYoTo:(id)to observer:(id)observer;
-(void)displayAllPendingSignalMessages;
-(void)displaySignalMessageWithDelay:(id)delay;
-(void)OnVideoDownloadAfterOK:(id)ok;
-(void)OnDownloadImageOk:(id)ok;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnUnReadCountChange:(id)change;
-(void)OnMsgNotAddDBNotify:(id)notify MsgWrap:(id)wrap;
-(void)OnUpdatedCdnDnsInfo:(id)info snsCdnInfo:(id)info2 appCdnInfo:(id)info3;
-(void)onNetworkStatusChange:(unsigned long)change;
-(void)onPostQuit;
-(void)onPreQuit;
-(void)onKickQuit;
-(void)logoutWatch;
-(void)onAuthOK;
-(void)handleGetIosExtensionKeyResp:(id)resp Event:(unsigned long)event;
-(void)getExtensionKeyForceRefresh:(BOOL)refresh;
-(void)checkAndRefreshSessionKeyIfNeed;
-(BOOL)isSessionKeyCached;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)_handleSession:(id)session didReceiveUserInfo:(id)info;
-(void)_handleSessionMessage:(id)message replyHandler:(id)handler;
-(void)session:(id)session didReceiveFile:(id)file;
-(void)session:(id)session didFinishFileTransfer:(id)transfer error:(id)error;
-(void)session:(id)session didReceiveUserInfo:(id)info;
-(void)session:(id)session didFinishUserInfoTransfer:(id)transfer error:(id)error;
-(void)session:(id)session didReceiveApplicationContext:(id)context;
-(void)session:(id)session didReceiveMessageData:(id)data replyHandler:(id)handler;
-(void)session:(id)session didReceiveMessageData:(id)data;
-(void)session:(id)session didReceiveMessage:(id)message replyHandler:(id)handler;
-(void)session:(id)session didReceiveMessage:(id)message;
-(void)sessionReachabilityDidChange:(id)sessionReachability;
-(void)sessionWatchStateDidChange:(id)sessionWatchState;
-(BOOL)handleUserActivty:(id)activty restorationHandler:(id)handler;
-(void)jumpToChatViewIfNeed;
-(void)handleUpdateQuickReplies:(id)replies;
-(void)markWCMessageAsReadBeforeDateToWatch:(id)watch;
-(void)handleMarkWCMessageAsReadFromWatchDate:(id)watchDate;
-(id)getLatestWCMessageAsReadDate;
-(void)handleCurrentInterfaceControllerInfo:(id)info preferNowAsDate:(BOOL)date;
-(void)handleShareAppMessage:(id)message;
-(void)addMsgDataToWatchInbox:(id)watchInbox;
-(id)getRecentContactsInfosForWatch;
-(id)getRecentContactsList;
-(void)handleWatchContacts:(id)contacts;
-(void)_updateWatchContactsFromDB;
-(void)onContactListUpdate:(unsigned long)update;
-(id)dictionaryFromContact:(id)contact;
-(void)sendPairedInfoToServer;
-(void)setupSession;
-(void)willHandleOpenURL:(id)url;
-(void)didBecomeActive:(id)active;
-(void)onServiceClearData;
-(void)onServiceTerminate;
-(void)onServiceEnterForeground;
-(void)onServiceEnterBackground;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
-(void)transferInitDataForWatch;
-(void)transferAvatarWithUsername:(id)username;
-(void)transferCachedImage:(id)image forURLString:(id)urlstring progress:(float)progress;
-(void)transferCachedImage:(id)image forURLString:(id)urlstring;
-(BOOL)_tranferFilePath:(id)path payload:(id)payload;
-(BOOL)transferMessageWrap:(id)wrap forType:(unsigned)type;
-(id)transferFile:(id)file metadata:(id)metadata;
-(id)transferUserInfo:(id)info;
-(void)statDurationData:(unsigned long)data byFile:(id)file;
-(void)statActiveData:(unsigned long)data byFile:(id)file;
-(void)logStatsWCSessionFile:(id)file;
-(id)roomHeadImageWithUsername:(id)username circleColor:(id)color;
-(id)headImageForWatchWithUsername:(id)username;
-(BOOL)isWatchContactReachLimit;
-(id)watchContactUsernames;
-(void)changeContact:(id)contact toWatchContact:(BOOL)watchContact sync:(BOOL)sync needSendToWatch:(BOOL)watch notifyiPhone:(BOOL)phone;
-(void)setWatchContactUsernames:(id)usernames needSendToWatch:(BOOL)watch notifyiPhone:(BOOL)phone;
-(void)setWatchContactUsernames:(id)usernames needSendToWatch:(BOOL)watch;
@end

