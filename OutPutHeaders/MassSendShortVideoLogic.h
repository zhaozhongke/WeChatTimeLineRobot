/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UploadShortVideoDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSMutableArray, UploadShortVideoToCdn, NSString;

@interface MassSendShortVideoLogic : MMObject <UploadShortVideoDelegate, PBMessageObserverDelegate> {
	UploadShortVideoToCdn* m_oUploadShortVideoCdnMgr;
	NSMutableArray* m_taskAry;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)getToListMD5:(id)listMD5;
+(id)getToList:(id)list;
-(void).cxx_destruct;
-(void)UploadMassShortVideoFail:(id)fail;
-(void)removeTaskFromQueue:(id)queue;
-(void)UploadMassShortVideoOK:(id)ok;
-(void)UploadMassShortVideoProgress:(id)progress finishedLen:(long)len totalLen:(long)len3;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)UploadMassShortVideoUploadOK:(id)ok;
-(void)taskUploadFinish:(id)finish;
-(BOOL)isTaskUploadFinish:(id)finish;
-(void)StopMassSendShortVideo:(id)video;
-(void)cancelTask:(id)task;
-(void)resentTask:(id)task;
-(id)AddShortVideoMsgWithContacts:(id)contacts andVideoInfo:(id)info;
-(void)InternalStartUpload:(id)upload;
-(id)getAllUsrName:(id)name;
-(id)init;
@end
