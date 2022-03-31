// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: zk-prover.proto

#include "zk-prover.pb.h"
#include "zk-prover.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace zkprover {
namespace v1 {

static const char* ZKProverService_method_names[] = {
  "/zkprover.v1.ZKProverService/GetStatus",
  "/zkprover.v1.ZKProverService/GenProof",
  "/zkprover.v1.ZKProverService/Cancel",
  "/zkprover.v1.ZKProverService/GetProof",
  "/zkprover.v1.ZKProverService/Execute",
  "/zkprover.v1.ZKProverService/SynchronizeBatchProposal",
};

std::unique_ptr< ZKProverService::Stub> ZKProverService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ZKProverService::Stub> stub(new ZKProverService::Stub(channel));
  return stub;
}

ZKProverService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetStatus_(ZKProverService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GenProof_(ZKProverService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Cancel_(ZKProverService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetProof_(ZKProverService_method_names[3], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_Execute_(ZKProverService_method_names[4], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_SynchronizeBatchProposal_(ZKProverService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ZKProverService::Stub::GetStatus(::grpc::ClientContext* context, const ::zkprover::v1::GetStatusRequest& request, ::zkprover::v1::GetStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetStatus_, context, request, response);
}

void ZKProverService::Stub::experimental_async::GetStatus(::grpc::ClientContext* context, const ::zkprover::v1::GetStatusRequest* request, ::zkprover::v1::GetStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetStatus_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::GetStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::GetStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetStatus_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::GetStatus(::grpc::ClientContext* context, const ::zkprover::v1::GetStatusRequest* request, ::zkprover::v1::GetStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetStatus_, context, request, response, reactor);
}

void ZKProverService::Stub::experimental_async::GetStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::GetStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::GetStatusResponse>* ZKProverService::Stub::AsyncGetStatusRaw(::grpc::ClientContext* context, const ::zkprover::v1::GetStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::GetStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetStatus_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::GetStatusResponse>* ZKProverService::Stub::PrepareAsyncGetStatusRaw(::grpc::ClientContext* context, const ::zkprover::v1::GetStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::GetStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetStatus_, context, request, false);
}

::grpc::Status ZKProverService::Stub::GenProof(::grpc::ClientContext* context, const ::zkprover::v1::GenProofRequest& request, ::zkprover::v1::GenProofResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GenProof_, context, request, response);
}

void ZKProverService::Stub::experimental_async::GenProof(::grpc::ClientContext* context, const ::zkprover::v1::GenProofRequest* request, ::zkprover::v1::GenProofResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GenProof_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::GenProof(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::GenProofResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GenProof_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::GenProof(::grpc::ClientContext* context, const ::zkprover::v1::GenProofRequest* request, ::zkprover::v1::GenProofResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GenProof_, context, request, response, reactor);
}

void ZKProverService::Stub::experimental_async::GenProof(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::GenProofResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GenProof_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::GenProofResponse>* ZKProverService::Stub::AsyncGenProofRaw(::grpc::ClientContext* context, const ::zkprover::v1::GenProofRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::GenProofResponse>::Create(channel_.get(), cq, rpcmethod_GenProof_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::GenProofResponse>* ZKProverService::Stub::PrepareAsyncGenProofRaw(::grpc::ClientContext* context, const ::zkprover::v1::GenProofRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::GenProofResponse>::Create(channel_.get(), cq, rpcmethod_GenProof_, context, request, false);
}

::grpc::Status ZKProverService::Stub::Cancel(::grpc::ClientContext* context, const ::zkprover::v1::CancelRequest& request, ::zkprover::v1::CancelResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Cancel_, context, request, response);
}

void ZKProverService::Stub::experimental_async::Cancel(::grpc::ClientContext* context, const ::zkprover::v1::CancelRequest* request, ::zkprover::v1::CancelResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Cancel_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::Cancel(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::CancelResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Cancel_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::Cancel(::grpc::ClientContext* context, const ::zkprover::v1::CancelRequest* request, ::zkprover::v1::CancelResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Cancel_, context, request, response, reactor);
}

void ZKProverService::Stub::experimental_async::Cancel(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::CancelResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Cancel_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::CancelResponse>* ZKProverService::Stub::AsyncCancelRaw(::grpc::ClientContext* context, const ::zkprover::v1::CancelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::CancelResponse>::Create(channel_.get(), cq, rpcmethod_Cancel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::CancelResponse>* ZKProverService::Stub::PrepareAsyncCancelRaw(::grpc::ClientContext* context, const ::zkprover::v1::CancelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::CancelResponse>::Create(channel_.get(), cq, rpcmethod_Cancel_, context, request, false);
}

::grpc::ClientReaderWriter< ::zkprover::v1::GetProofRequest, ::zkprover::v1::GetProofResponse>* ZKProverService::Stub::GetProofRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::zkprover::v1::GetProofRequest, ::zkprover::v1::GetProofResponse>::Create(channel_.get(), rpcmethod_GetProof_, context);
}

void ZKProverService::Stub::experimental_async::GetProof(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::zkprover::v1::GetProofRequest,::zkprover::v1::GetProofResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::zkprover::v1::GetProofRequest,::zkprover::v1::GetProofResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetProof_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::zkprover::v1::GetProofRequest, ::zkprover::v1::GetProofResponse>* ZKProverService::Stub::AsyncGetProofRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::zkprover::v1::GetProofRequest, ::zkprover::v1::GetProofResponse>::Create(channel_.get(), cq, rpcmethod_GetProof_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::zkprover::v1::GetProofRequest, ::zkprover::v1::GetProofResponse>* ZKProverService::Stub::PrepareAsyncGetProofRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::zkprover::v1::GetProofRequest, ::zkprover::v1::GetProofResponse>::Create(channel_.get(), cq, rpcmethod_GetProof_, context, false, nullptr);
}

::grpc::ClientReaderWriter< ::zkprover::v1::ExecuteRequest, ::zkprover::v1::ExecuteResponse>* ZKProverService::Stub::ExecuteRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::zkprover::v1::ExecuteRequest, ::zkprover::v1::ExecuteResponse>::Create(channel_.get(), rpcmethod_Execute_, context);
}

void ZKProverService::Stub::experimental_async::Execute(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::zkprover::v1::ExecuteRequest,::zkprover::v1::ExecuteResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::zkprover::v1::ExecuteRequest,::zkprover::v1::ExecuteResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Execute_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::zkprover::v1::ExecuteRequest, ::zkprover::v1::ExecuteResponse>* ZKProverService::Stub::AsyncExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::zkprover::v1::ExecuteRequest, ::zkprover::v1::ExecuteResponse>::Create(channel_.get(), cq, rpcmethod_Execute_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::zkprover::v1::ExecuteRequest, ::zkprover::v1::ExecuteResponse>* ZKProverService::Stub::PrepareAsyncExecuteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::zkprover::v1::ExecuteRequest, ::zkprover::v1::ExecuteResponse>::Create(channel_.get(), cq, rpcmethod_Execute_, context, false, nullptr);
}

::grpc::Status ZKProverService::Stub::SynchronizeBatchProposal(::grpc::ClientContext* context, const ::zkprover::v1::SynchronizeBatchProposalRequest& request, ::zkprover::v1::SynchronizeBatchProposalResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SynchronizeBatchProposal_, context, request, response);
}

void ZKProverService::Stub::experimental_async::SynchronizeBatchProposal(::grpc::ClientContext* context, const ::zkprover::v1::SynchronizeBatchProposalRequest* request, ::zkprover::v1::SynchronizeBatchProposalResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SynchronizeBatchProposal_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::SynchronizeBatchProposal(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::SynchronizeBatchProposalResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SynchronizeBatchProposal_, context, request, response, std::move(f));
}

void ZKProverService::Stub::experimental_async::SynchronizeBatchProposal(::grpc::ClientContext* context, const ::zkprover::v1::SynchronizeBatchProposalRequest* request, ::zkprover::v1::SynchronizeBatchProposalResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SynchronizeBatchProposal_, context, request, response, reactor);
}

void ZKProverService::Stub::experimental_async::SynchronizeBatchProposal(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::zkprover::v1::SynchronizeBatchProposalResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SynchronizeBatchProposal_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::SynchronizeBatchProposalResponse>* ZKProverService::Stub::AsyncSynchronizeBatchProposalRaw(::grpc::ClientContext* context, const ::zkprover::v1::SynchronizeBatchProposalRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::SynchronizeBatchProposalResponse>::Create(channel_.get(), cq, rpcmethod_SynchronizeBatchProposal_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::zkprover::v1::SynchronizeBatchProposalResponse>* ZKProverService::Stub::PrepareAsyncSynchronizeBatchProposalRaw(::grpc::ClientContext* context, const ::zkprover::v1::SynchronizeBatchProposalRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::zkprover::v1::SynchronizeBatchProposalResponse>::Create(channel_.get(), cq, rpcmethod_SynchronizeBatchProposal_, context, request, false);
}

ZKProverService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ZKProverService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ZKProverService::Service, ::zkprover::v1::GetStatusRequest, ::zkprover::v1::GetStatusResponse>(
          [](ZKProverService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::zkprover::v1::GetStatusRequest* req,
             ::zkprover::v1::GetStatusResponse* resp) {
               return service->GetStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ZKProverService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ZKProverService::Service, ::zkprover::v1::GenProofRequest, ::zkprover::v1::GenProofResponse>(
          [](ZKProverService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::zkprover::v1::GenProofRequest* req,
             ::zkprover::v1::GenProofResponse* resp) {
               return service->GenProof(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ZKProverService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ZKProverService::Service, ::zkprover::v1::CancelRequest, ::zkprover::v1::CancelResponse>(
          [](ZKProverService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::zkprover::v1::CancelRequest* req,
             ::zkprover::v1::CancelResponse* resp) {
               return service->Cancel(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ZKProverService_method_names[3],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< ZKProverService::Service, ::zkprover::v1::GetProofRequest, ::zkprover::v1::GetProofResponse>(
          [](ZKProverService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             ::grpc_impl::ServerReaderWriter<::zkprover::v1::GetProofResponse,
             ::zkprover::v1::GetProofRequest>* stream) {
               return service->GetProof(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ZKProverService_method_names[4],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< ZKProverService::Service, ::zkprover::v1::ExecuteRequest, ::zkprover::v1::ExecuteResponse>(
          [](ZKProverService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             ::grpc_impl::ServerReaderWriter<::zkprover::v1::ExecuteResponse,
             ::zkprover::v1::ExecuteRequest>* stream) {
               return service->Execute(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ZKProverService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ZKProverService::Service, ::zkprover::v1::SynchronizeBatchProposalRequest, ::zkprover::v1::SynchronizeBatchProposalResponse>(
          [](ZKProverService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::zkprover::v1::SynchronizeBatchProposalRequest* req,
             ::zkprover::v1::SynchronizeBatchProposalResponse* resp) {
               return service->SynchronizeBatchProposal(ctx, req, resp);
             }, this)));
}

ZKProverService::Service::~Service() {
}

::grpc::Status ZKProverService::Service::GetStatus(::grpc::ServerContext* context, const ::zkprover::v1::GetStatusRequest* request, ::zkprover::v1::GetStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ZKProverService::Service::GenProof(::grpc::ServerContext* context, const ::zkprover::v1::GenProofRequest* request, ::zkprover::v1::GenProofResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ZKProverService::Service::Cancel(::grpc::ServerContext* context, const ::zkprover::v1::CancelRequest* request, ::zkprover::v1::CancelResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ZKProverService::Service::GetProof(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::zkprover::v1::GetProofResponse, ::zkprover::v1::GetProofRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ZKProverService::Service::Execute(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::zkprover::v1::ExecuteResponse, ::zkprover::v1::ExecuteRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ZKProverService::Service::SynchronizeBatchProposal(::grpc::ServerContext* context, const ::zkprover::v1::SynchronizeBatchProposalRequest* request, ::zkprover::v1::SynchronizeBatchProposalResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace zkprover
}  // namespace v1

